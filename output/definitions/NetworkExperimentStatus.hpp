#ifndef SWAGGER_TYPES_NetworkExperimentStatus_HPP
#define SWAGGER_TYPES_NetworkExperimentStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class NetworkExperimentStatus {
    // 
    Completed = 3,
    // 
    Disabled = 0,
    // 
    InProgress = 2,
    // 
    Skipped = 1,
  };

  inline void to_json(nlohmann::json& j, const NetworkExperimentStatus& v) {
    switch(v) {
      case NetworkExperimentStatus::Completed:
        j = "Completed";
      break;
      case NetworkExperimentStatus::Disabled:
        j = "Disabled";
      break;
      case NetworkExperimentStatus::InProgress:
        j = "InProgress";
      break;
      case NetworkExperimentStatus::Skipped:
        j = "Skipped";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, NetworkExperimentStatus& v) {
    const auto s& = j.get<std::string>();
    if(s == "Completed"){
      v = NetworkExperimentStatus::Completed;
      return;
    }
    if(s == "Disabled"){
      v = NetworkExperimentStatus::Disabled;
      return;
    }
    if(s == "InProgress"){
      v = NetworkExperimentStatus::InProgress;
      return;
    }
    if(s == "Skipped"){
      v = NetworkExperimentStatus::Skipped;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_NetworkExperimentStatus_HPP
