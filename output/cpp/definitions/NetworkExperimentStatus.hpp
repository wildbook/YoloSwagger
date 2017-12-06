#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class NetworkExperimentStatus_t {
    Completed_E = 3,
    Disabled_E = 0,
    InProgress_E = 2,
    Skipped_E = 1,
  };

  inline void to_json(nlohmann::json& j, const NetworkExperimentStatus_t& v) {
    switch(v) {
      case NetworkExperimentStatus_t::Completed_E:
        j = "Completed";
      break;
      case NetworkExperimentStatus_t::Disabled_E:
        j = "Disabled";
      break;
      case NetworkExperimentStatus_t::InProgress_E:
        j = "InProgress";
      break;
      case NetworkExperimentStatus_t::Skipped_E:
        j = "Skipped";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, NetworkExperimentStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Completed"){
      v = NetworkExperimentStatus_t::Completed_E;
      return;
    }
    if(s == "Disabled"){
      v = NetworkExperimentStatus_t::Disabled_E;
      return;
    }
    if(s == "InProgress"){
      v = NetworkExperimentStatus_t::InProgress_E;
      return;
    }
    if(s == "Skipped"){
      v = NetworkExperimentStatus_t::Skipped_E;
      return;
    }
  }
}
