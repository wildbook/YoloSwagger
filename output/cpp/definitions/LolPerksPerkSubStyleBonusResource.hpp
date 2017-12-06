#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkSubStyleBonusResource_t {
    int32_t perkId;
    int32_t styleId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkSubStyleBonusResource_t& v) {
    j["perkId"] = v.perkId;
    j["styleId"] = v.styleId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkSubStyleBonusResource_t& v) {
    v.perkId = j.at("perkId").get<int32_t>();
    v.styleId = j.at("styleId").get<int32_t>();
  }
}
