#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolHonorV2ProfileInfo_t {
    bool rewardsLocked;
    int32_t checkpoint;
    int32_t honorLevel;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2ProfileInfo_t& v) {
    j["rewardsLocked"] = v.rewardsLocked;
    j["checkpoint"] = v.checkpoint;
    j["honorLevel"] = v.honorLevel;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2ProfileInfo_t& v) {
    v.rewardsLocked = j.at("rewardsLocked").get<bool>();
    v.checkpoint = j.at("checkpoint").get<int32_t>();
    v.honorLevel = j.at("honorLevel").get<int32_t>();
  }
  inline std::string to_string(const LolHonorV2ProfileInfo_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
