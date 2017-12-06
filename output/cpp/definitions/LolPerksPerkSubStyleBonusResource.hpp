#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkSubStyleBonusResource_t {
    int32_t styleId;
    int32_t perkId;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkSubStyleBonusResource_t& v) {
    j["styleId"] = v.styleId;
    j["perkId"] = v.perkId;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkSubStyleBonusResource_t& v) {
    v.styleId = j.at("styleId").get<int32_t>();
    v.perkId = j.at("perkId").get<int32_t>();
  }
}
