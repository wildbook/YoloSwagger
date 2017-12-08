#pragma once
#include <json.hpp>
#include <optional>
#include "ClashRewardConfigEntry.hpp"
#include "ClashRewardKeyType.hpp"
namespace leagueapi {
  struct ClashRewardConfigClient_t {
    std::vector<ClashRewardKeyType_t> keyDef;
    std::string name;
    std::vector<ClashRewardConfigEntry_t> entries;
    bool grantToSub;
  };

  inline void to_json(nlohmann::json& j, const ClashRewardConfigClient_t& v) {
    j["keyDef"] = v.keyDef;
    j["name"] = v.name;
    j["entries"] = v.entries;
    j["grantToSub"] = v.grantToSub;
  }

  inline void from_json(const nlohmann::json& j, ClashRewardConfigClient_t& v) {
    v.keyDef = j.at("keyDef").get<std::vector<ClashRewardKeyType_t>>();
    v.name = j.at("name").get<std::string>();
    v.entries = j.at("entries").get<std::vector<ClashRewardConfigEntry_t>>();
    v.grantToSub = j.at("grantToSub").get<bool>();
  }
  inline std::string to_string(const ClashRewardConfigClient_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
