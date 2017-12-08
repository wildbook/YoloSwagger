#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LootLcdsRecipeSlotClientDTO_t {
    std::string_t query;
    std::string_t quantityExpression;
    int32_t_t slotNumber;
  };

  inline void to_json(nlohmann::json& j, const LootLcdsRecipeSlotClientDTO_t& v) {
    j["query"] = v.query;
    j["quantityExpression"] = v.quantityExpression;
    j["slotNumber"] = v.slotNumber;
  }

  inline void from_json(const nlohmann::json& j, LootLcdsRecipeSlotClientDTO_t& v) {
    v.query = j.at("query").get<std::string_t>();
    v.quantityExpression = j.at("quantityExpression").get<std::string_t>();
    v.slotNumber = j.at("slotNumber").get<int32_t_t>();
  }
  inline std::string to_string(const LootLcdsRecipeSlotClientDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
