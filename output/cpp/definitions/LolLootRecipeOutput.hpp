#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootRecipeOutput_t {
    int32_t quantity;
    std::string lootName;
  };

  inline void to_json(nlohmann::json& j, const LolLootRecipeOutput_t& v) {
    j["quantity"] = v.quantity;
    j["lootName"] = v.lootName;
  }

  inline void from_json(const nlohmann::json& j, LolLootRecipeOutput_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.lootName = j.at("lootName").get<std::string>();
  }
  inline std::string to_string(const LolLootRecipeOutput_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
