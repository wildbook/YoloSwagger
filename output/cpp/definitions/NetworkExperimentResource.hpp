#pragma once
#include <json.hpp>
#include <optional>
#include "NetworkExperimentStatus.hpp"
namespace leagueapi {
  struct NetworkExperimentResource_t {
    NetworkExperimentStatus_t status;
  };

  inline void to_json(nlohmann::json& j, const NetworkExperimentResource_t& v) {
    j["status"] = v.status;
  }

  inline void from_json(const nlohmann::json& j, NetworkExperimentResource_t& v) {
    v.status = j.at("status").get<NetworkExperimentStatus_t>();
  }
}
