#ifndef SWAGGER_TYPES_LootLcdsRecipeSlotClientDTO_HPP
#define SWAGGER_TYPES_LootLcdsRecipeSlotClientDTO_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LootLcdsRecipeSlotClientDTO {
    // 
    std::string query;
    // 
    std::string quantityExpression;
    // 
    int32_t slotNumber;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeSlotClientDTO& v) {
    j["query"] = v.query;
    j["quantityExpression"] = v.quantityExpression;
    j["slotNumber"] = v.slotNumber;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeSlotClientDTO& v) {
    v.query = j.at("query").get<std::string>;
    v.quantityExpression = j.at("quantityExpression").get<std::string>;
    v.slotNumber = j.at("slotNumber").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LootLcdsRecipeSlotClientDTO_HPP
