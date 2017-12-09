#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeSlotClientDTO_t {
    std::string quantityExpression;
    int32_t slotNumber;
    std::string query;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeSlotClientDTO_t& v) {
    j["quantityExpression"] = v.quantityExpression;
    j["slotNumber"] = v.slotNumber;
    j["query"] = v.query;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeSlotClientDTO_t& v) {
    v.quantityExpression = j.at("quantityExpression").get<std::string>();
    v.slotNumber = j.at("slotNumber").get<int32_t>();
    v.query = j.at("query").get<std::string>();
  }
  inline std::string to_string(const LootLcdsRecipeSlotClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
