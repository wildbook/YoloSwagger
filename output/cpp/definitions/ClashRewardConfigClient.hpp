#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigEntry.hpp"
#include "ClashRewardKeyType.hpp"
namespace leagueapi {
  struct ClashRewardConfigClient_t {
    bool grantToSub;
    std::vector<ClashRewardKeyType_t> keyDef;
    std::vector<ClashRewardConfigEntry_t> entries;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigClient_t& v) {
    j["grantToSub"] = v.grantToSub;
    j["keyDef"] = v.keyDef;
    j["entries"] = v.entries;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigClient_t& v) {
    v.grantToSub = j.at("grantToSub").get<bool>();
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType_t>>();
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry_t>>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const ClashRewardConfigClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
