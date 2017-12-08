#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeSlotClientDTO_t {
    std::string query;
    std::string quantityExpression;
    int32_t slotNumber;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeSlotClientDTO_t& v) {
    j["query"] = v.query;
    j["quantityExpression"] = v.quantityExpression;
    j["slotNumber"] = v.slotNumber;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeSlotClientDTO_t& v) {
    v.query = j.at("query").get<std::string>();
    v.quantityExpression = j.at("quantityExpression").get<std::string>();
    v.slotNumber = j.at("slotNumber").get<int32_t>();
  }
  inline std::string to_string(const LootLcdsRecipeSlotClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
