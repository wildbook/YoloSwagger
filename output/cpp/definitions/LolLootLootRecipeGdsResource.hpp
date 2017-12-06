#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLootLootRecipeGdsResource_t {
    std::string placeholder;
  };

  inline void to_json(nlohmann::json& j, const LolLootLootRecipeGdsResource_t& v) {
    j["placeholder"] = v.placeholder;
  }

  inline void from_json(const nlohmann::json& j, LolLootLootRecipeGdsResource_t& v) {
    v.placeholder = j.at("placeholder").get<std::string>();
  }
}
