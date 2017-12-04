#ifndef SWAGGER_TYPES_LolClashGameflowAvailability_HPP
#define SWAGGER_TYPES_LolClashGameflowAvailability_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashGameflowAvailability {
    // 
    bool isAvailable;
  };

  inline void to_json(nlohmann::json& j, const LolClashGameflowAvailability& v) {
    j["isAvailable"] = v.isAvailable;
  }

  inline void from_json(const nlohmann::json& j, LolClashGameflowAvailability& v) {
    v.isAvailable = j.at("isAvailable").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolClashGameflowAvailability_HPP
