#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeSlotClientDTO_t {
    std::string quantityExpression;
    std::string query;
    int32_t slotNumber;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeSlotClientDTO_t& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["query"] = v.query;
    j["slotNumber"] = v.slotNumber;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeSlotClientDTO_t& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>();
    v.query = j.at("query").get<std::string>();
    v.slotNumber = j.at("slotNumber").get<int32_t>();
  }
}
