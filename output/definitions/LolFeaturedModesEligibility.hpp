#ifndef SWAGGER_TYPES_LolFeaturedModesEligibility_HPP
#define SWAGGER_TYPES_LolFeaturedModesEligibility_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolFeaturedModesEligibility {
    // 
    bool eligible;
    // 
    int32_t queueId;
  };

  void to_json(nlohmann::json& j, const LolFeaturedModesEligibility& v) {
    j["eligible"] = v.eligible;
    j["queueId"] = v.queueId;
  }

  void from_json(const nlohmann::json& j, LolFeaturedModesEligibility& v) {
    v.eligible = j.at("eligible").get<bool>;
    v.queueId = j.at("queueId").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolFeaturedModesEligibility_HPP
