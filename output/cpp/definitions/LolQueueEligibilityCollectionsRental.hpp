#ifndef SWAGGER_TYPES_LolQueueEligibilityCollectionsRental_HPP
#define SWAGGER_TYPES_LolQueueEligibilityCollectionsRental_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolQueueEligibilityCollectionsRental {
    // 
    bool rented;
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityCollectionsRental& v) {
    j["rented"] = v.rented;
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityCollectionsRental& v) {
    v.rented = j.at("rented").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityCollectionsRental_HPP