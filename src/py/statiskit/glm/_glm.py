__all__ = []

# Import dependency decorator modules
import statiskit.linalg._linalg
import statiskit.core._core

# Import Boost.Python module
import __glm



# Define aliases
__glm.statiskit.ScalarLink.PredictorType = __glm.statiskit.ScalarPredictor
__glm.statiskit.VectorLink.PredictorType = __glm.statiskit.VectorPredictor
__glm.statiskit.VectorLink.ExpectationType = statiskit.linalg.__linalg.eigen._Matrix_582003aac6505a6d9ea4c4fa99329e5e
__glm.statiskit.PoissonLink.FamilyType = statiskit.core.__core.statiskit.PoissonDistribution
__glm.statiskit.BinomialLink.FamilyType = statiskit.core.__core.statiskit.BinomialDistribution
__glm.statiskit.OrdinalLink.FamilyType = statiskit.core.__core.statiskit.OrdinalDistribution
__glm.statiskit.NominalLink.FamilyType = statiskit.core.__core.statiskit.NominalDistribution
__glm.statiskit.NegativeBinomialLink.FamilyType = statiskit.core.__core.statiskit.NegativeBinomialDistribution
