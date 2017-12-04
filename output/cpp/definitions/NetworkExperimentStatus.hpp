#ifndef SWAGGER_TYPES_NetworkExperimentStatus_HPP
#define SWAGGER_TYPES_NetworkExperimentStatus_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class NetworkExperimentStatus {
    // 
    Disabled = 0,
    // 
    Completed = 3,
    // 
    Skipped = 1,
    // 
    InProgress = 2,
  };

  inline void to_json(nlohmann::json& j, const NetworkExperimentStatus& v) {
    switch(v) {
      case NetworkExperimentStatus::Disabled:
        j = "Disabled";
      break;
      case NetworkExperimentStatus::Completed:
        j = "Completed";
      break;
      case NetworkExperimentStatus::Skipped:
        j = "Skipped";
      break;
      case NetworkExperimentStatus::InProgress:
        j = "InProgress";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, NetworkExperimentStatus& v) {
    const auto& s = j.get<std::string>();
    if(s == "Disabled"){
      v = NetworkExperimentStatus::Disabled;
      return;
    }
    if(s == "Completed"){
      v = NetworkExperimentStatus::Completed;
      return;
    }
    if(s == "Skipped"){
      v = NetworkExperimentStatus::Skipped;
      return;
    }
    if(s == "InProgress"){
      v = NetworkExperimentStatus::InProgress;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_NetworkExperimentStatus_HPP
