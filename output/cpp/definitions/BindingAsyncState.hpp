#ifndef SWAGGER_TYPES_BindingAsyncState_HPP
#define SWAGGER_TYPES_BindingAsyncState_HPP
#include <json.hpp>
namespace leagueapi {
  // Possible states of an asynchronous operation.
  enum class BindingAsyncState {
    // A request to cancel the operation has been made
    Cancelling = 2,
    // Invalid state
    None = 0,
    // The operation completed successfully
    Succeeded = 4,
    // The operation encountered an error
    Failed = 5,
    // The operation is in flight
    Running = 1,
    // The operation was cancelled
    Cancelled = 3,
  };

  inline void to_json(nlohmann::json& j, const BindingAsyncState& v) {
    switch(v) {
      case BindingAsyncState::Cancelling:
        j = "Cancelling";
      break;
      case BindingAsyncState::None:
        j = "None";
      break;
      case BindingAsyncState::Succeeded:
        j = "Succeeded";
      break;
      case BindingAsyncState::Failed:
        j = "Failed";
      break;
      case BindingAsyncState::Running:
        j = "Running";
      break;
      case BindingAsyncState::Cancelled:
        j = "Cancelled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, BindingAsyncState& v) {
    const auto& s = j.get<std::string>();
    if(s == "Cancelling"){
      v = BindingAsyncState::Cancelling;
      return;
    }
    if(s == "None"){
      v = BindingAsyncState::None;
      return;
    }
    if(s == "Succeeded"){
      v = BindingAsyncState::Succeeded;
      return;
    }
    if(s == "Failed"){
      v = BindingAsyncState::Failed;
      return;
    }
    if(s == "Running"){
      v = BindingAsyncState::Running;
      return;
    }
    if(s == "Cancelled"){
      v = BindingAsyncState::Cancelled;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_BindingAsyncState_HPP
