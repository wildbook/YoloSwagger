#pragma once
#include <json.hpp>
#include <optional>
#include "NetworkExperimentResource.hpp"
namespace leagueapi {
  struct NetworkExperimentsResource_t {
    std::map<std::string, NetworkExperimentResource_t> experiments;
  };

  inline void to_json(nlohmann::json& j, const NetworkExperimentsResource_t& v) {
    j["experiments"] = v.experiments;
  }

  inline void from_json(const nlohmann::json& j, NetworkExperimentsResource_t& v) {
    v.experiments = j.at("experiments").get<std::map<std::string, NetworkExperimentResource_t>>();
  }
  inline std::string to_string(const NetworkExperimentsResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
