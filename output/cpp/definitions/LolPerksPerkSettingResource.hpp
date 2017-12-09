#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkSettingResource_t {
    int32_t perkSubStyle;
    std::vector<int32_t> perkIds;
    int32_t perkStyle;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkSettingResource_t& v) {
    j["perkSubStyle"] = v.perkSubStyle;
    j["perkIds"] = v.perkIds;
    j["perkStyle"] = v.perkStyle;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkSettingResource_t& v) {
    v.perkSubStyle = j.at("perkSubStyle").get<int32_t>();
    v.perkIds = j.at("perkIds").get<std::vector<int32_t>>();
    v.perkStyle = j.at("perkStyle").get<int32_t>();
  }
  inline std::string to_string(const LolPerksPerkSettingResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
