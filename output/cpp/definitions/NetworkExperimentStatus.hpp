#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class NetworkExperimentStatus_t {
    InProgress_E = 2,
    Completed_E = 3,
    Skipped_E = 1,
    Disabled_E = 0,
  };

  inline void to_json(nlohmann::json& j, const NetworkExperimentStatus_t& v) {
    switch(v) {
      case NetworkExperimentStatus_t::InProgress_E:
        j = "InProgress";
      break;
      case NetworkExperimentStatus_t::Completed_E:
        j = "Completed";
      break;
      case NetworkExperimentStatus_t::Skipped_E:
        j = "Skipped";
      break;
      case NetworkExperimentStatus_t::Disabled_E:
        j = "Disabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, NetworkExperimentStatus_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "InProgress"){
      v = NetworkExperimentStatus_t::InProgress_E;
      return;
    }
    if(s == "Completed"){
      v = NetworkExperimentStatus_t::Completed_E;
      return;
    }
    if(s == "Skipped"){
      v = NetworkExperimentStatus_t::Skipped_E;
      return;
    }
    if(s == "Disabled"){
      v = NetworkExperimentStatus_t::Disabled_E;
      return;
    }
  }
  inline std::string to_string(const NetworkExperimentStatus_t& v) {
    switch(v) {
      case NetworkExperimentStatus_t::InProgress_E:
        return "InProgress";
      case NetworkExperimentStatus_t::Completed_E:
        return "Completed";
      case NetworkExperimentStatus_t::Skipped_E:
        return "Skipped";
      case NetworkExperimentStatus_t::Disabled_E:
        return "Disabled";
    }
  }

}
