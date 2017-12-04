#ifndef SWAGGER_TYPES_NetworkExperimentsResource_HPP
#define SWAGGER_TYPES_NetworkExperimentsResource_HPP
#include <json.hpp>
#include "NetworkExperimentResource.hpp"
namespace leagueapi {
  // 
  struct NetworkExperimentsResource {
    // 
    std::map<std::string, NetworkExperimentResource> experiments;
  };

  void to_json(nlohmann::json& j, const NetworkExperimentsResource& v) {
    j["experiments"] = v.experiments;
  }

  void from_json(const nlohmann::json& j, NetworkExperimentsResource& v) {
    v.experiments = j.at("experiments").get<std::map<std::string, NetworkExperimentResource>>;
  }

}
#endif // SWAGGER_TYPES_NetworkExperimentsResource_HPP
