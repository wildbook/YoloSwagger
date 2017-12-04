#ifndef SWAGGER_TYPES_LolFeaturedModesEligibility_HPP
#define SWAGGER_TYPES_LolFeaturedModesEligibility_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolFeaturedModesEligibility {
    // 
    int32_t queueId;
    // 
    bool eligible;
  };

  inline void to_json(nlohmann::json& j, const LolFeaturedModesEligibility& v) {
    j["queueId"] = v.queueId;
    j["eligible"] = v.eligible;
  }

  inline void from_json(const nlohmann::json& j, LolFeaturedModesEligibility& v) {
    v.queueId = j.at("queueId").get<int32_t>;
    v.eligible = j.at("eligible").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesEligibility_HPP
