#ifndef ASTRID_MULTIND_ONCE__
#define ASTRID_MULTIND_ONCE__

#include <fstream>
#include <iostream>
#include "phylokit/DistanceMatrix.hpp"
#include <string>
#include <unordered_map>


enum file_format {ASTRAL, ASTRIDM};

class IndSpeciesMapping {
private:
  std::map<Taxon, Taxon> ind_species_map;
  std::map<Taxon, std::vector<Taxon>> species_ind_map;

  TaxonSet& indiv_ts;
  TaxonSet species_ts;
  
public:
  IndSpeciesMapping(TaxonSet& indiv_ts_) :
    indiv_ts(indiv_ts_),
    species_ts(indiv_ts.size())
  {}
  
  //IndSpeciesMapping(istream& instream);
  //IndSpeciesMapping(string& infile);

  Taxon operator[](Taxon t);

  DistanceMatrix average(DistanceMatrix& indiv_mat) const;

  file_format identify(std::istream& instream);

  void load_astral(std::istream& instream);
  void load_astridm(std::istream& instream);
  void load(std::istream& instream);
  void load(std::string& infile);
  
  TaxonSet& species();
  TaxonSet& indivs();
  
};

#endif
