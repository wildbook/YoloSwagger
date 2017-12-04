#ifndef SWAGGER_TYPES_LootLcdsRecipeOutputDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeOutputDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootLcdsRecipeOutputDTO {
    // 
    bool allowDuplicates;
    // 
    std::string lootName;
    // 
    double probability;
    // 
    std::string quantityExpression;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeOutputDTO& v) {
    j["allowDuplicates"] = v.allowDuplicates;
    j["lootName"] = v.lootName;
    j["probability"] = v.probability;
    j["quantityExpression"] = v.quantityExpression;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeOutputDTO& v) {
    v.allowDuplicates = j.at("allowDuplicates").get<bool>;
    v.lootName = j.at("lootName").get<std::string>;
    v.probability = j.at("probability").get<double>;
    v.quantityExpression = j.at("quantityExpression").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeOutputDTO_HPP
