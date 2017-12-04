#ifndef SWAGGER_TYPES_NetworkExperimentResource_HPP
#define SWAGGER_TYPES_NetworkExperimentResource_HPP
#include <json.hpp>
#include "NetworkExperimentStatus.hpp"
namespace leagueapi {
  // 
  struct NetworkExperimentResource {
    // 
    NetworkExperimentStatus status;
  };

  void to_json(nlohmann::json& j, const NetworkExperimentResource& v) {
    j["status"] = v.status;
  }

  void from_json(const nlohmann::json& j, NetworkExperimentResource& v) {
    v.status = j.at("status").get<NetworkExperimentStatus>;
  }

}
#endif // SWAGGER_TYPES_NetworkExperimentResource_HPP
