#ifndef HELP_HPP
#define HELP_HPP

string version="2.2.1";

string help = ""
  "********************************\n"
  "****** ASTRID version " + version + " ******\n"
  "********************************\n"
  "\n"
  "Basic usage:\n"
  "============\n"
  "ASTRID -i <inputfile> -o <outputfile>\n"
  "\n"
  "By default ASTRID will use FastME with SPRs as the distance method if it can, "
  "and will fall back to BioNJ* if the distance matrix is missing taxa.\n"
  "\n"
  "======================\n"
  "Command line arguments\n"
  "======================\n"
  "-i --input \t Specify input file. Should contain one tree per line, in Newick format.\n"
  "-o --output \t Specify output file (default is infile.astrid). Will contain one output tree, in Newick format. The tree may have branch lengths, depending on the distance method used, but these are not meaningful\n"
  "\n"
  "[Distance method selection]\n"
  "-u \t Use UPGMA as distance method for tree estimation\n"
  "-f \t Use FastME with no local search as distance method for tree estimation\n"
  "-n \t Use FastME with NNIs for local search as distance method for tree estimation\n"    
  "-s \t Use FastME with NNIs and SPRs for local search as distance method for tree estimation\n"
  "--bionj \t Use BioNJ* with as distance method for tree estimation (make sure PhyDstar.jar is in the same folder as the ASTRID executable)\n"
  "--auto \t [default] Automatically choose between --bionj and -s depending on if the distance matrix is missing taxa\n"
  "\n"
  "\n"
  "[Multiple individuals]\n"
  "-a --multind \t [experimental] Specify mapping file for multiple-individual datasets. Can be in one of three formats, which will be auto-detected:\n"
  "\n"
  "\tFormat 1:\n"
  "\t\tspecies1:indiv1,indiv2,indiv3\n"
  "\t\tspecies2:,indiv4,indiv5\n"
  "\t\t...\n"
  "\n"
  "\tFormat 2:\n"
  "\t\tspecies1 indiv1 indiv2 indiv3\n"
  "\t\tspecies2 indiv4 indiv5\n"
  "\t\t...\n"
  "\tFormat 3:\n"
  "\t\tindiv1 species1\n"
  "\t\tindiv2 species1\n"
  "\t\tindiv3 species1\n"
  "\t\tindiv4 species2\n"
  "\t\tindiv5 species2\n"  
  "\t\t...\n";
  

#endif
