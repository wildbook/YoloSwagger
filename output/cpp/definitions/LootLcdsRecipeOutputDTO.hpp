#ifndef SWAGGER_TYPES_LootLcdsRecipeOutputDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeOutputDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootLcdsRecipeOutputDTO {
    // 
    std::string quantityExpression;
    // 
    std::string lootName;
    // 
    double probability;
    // 
    bool allowDuplicates;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeOutputDTO& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["lootName"] = v.lootName;
    j["probability"] = v.probability;
    j["allowDuplicates"] = v.allowDuplicates;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeOutputDTO& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>;
    v.lootName = j.at("lootName").get<std::string>;
    v.probability = j.at("probability").get<double>;
    v.allowDuplicates = j.at("allowDuplicates").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeOutputDTO_HPP
