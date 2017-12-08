#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesEligibility_t {
    int32_t queueId;
    bool eligible;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesEligibility_t& v) {
    j["queueId"] = v.queueId;
    j["eligible"] = v.eligible;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesEligibility_t& v) {
    v.queueId = j.at("queueId").get<int32_t>();
    v.eligible = j.at("eligible").get<bool>();
  }
  inline std::string to_string(const LolFeaturedModesEligibility_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
