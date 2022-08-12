#include "ortools/linear_solver/linear_solver.h"
namespace operations_research {
void BasicExample() {

  std::unique_ptr<MPSolver> solver(MPSolver::CreateSolver("GLOP"));
  // Create the variables x and y.
  MPVariable *const x = solver->MakeNumVar(0.0, 1, "x");
  MPVariable *const y = solver->MakeNumVar(0.0, 2, "y");
  LOG(INFO) << "Number of variables = " << solver->NumVariables();
}

} // namespace operations_research

int main() {
  std::cout << "hello world";
  return 0;
}
