#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolFeaturedModesEligibility_t {
    bool eligible;
    int32_t queueId;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesEligibility_t& v) {
    j["eligible"] = v.eligible;
    j["queueId"] = v.queueId;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesEligibility_t& v) {
    v.eligible = j.at("eligible").get<bool>();
    v.queueId = j.at("queueId").get<int32_t>();
  }
  inline std::string to_string(const LolFeaturedModesEligibility_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
