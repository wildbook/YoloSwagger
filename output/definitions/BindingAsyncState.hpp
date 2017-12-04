#ifndef SWAGGER_TYPES_BindingAsyncState_HPP
#define SWAGGER_TYPES_BindingAsyncState_HPP
#include <json.hpp>
namespace test {
  // Possible states of an asynchronous operation.
  enum class BindingAsyncState {
'    // The operation was cancelled
    Cancelled = 3,
    // A request to cancel the operation has been made
    Cancelling = 2,
    // The operation encountered an error
    Failed = 5,
    // Invalid state
    None = 0,
    // The operation is in flight
    Running = 1,
    // The operation completed successfully
    Succeeded = 4,
  };

  void to_json(nlohmann::json& j, const BindingAsyncState& v) {
    switch(v) {
      case BindingAsyncState::Cancelled:
        j = "Cancelled";
      break;
      case BindingAsyncState::Cancelling:
        j = "Cancelling";
      break;
      case BindingAsyncState::Failed:
        j = "Failed";
      break;
      case BindingAsyncState::None:
        j = "None";
      break;
      case BindingAsyncState::Running:
        j = "Running";
      break;
      case BindingAsyncState::Succeeded:
        j = "Succeeded";
      break;
    }
  }

  void from_json(const nlohmann::json& j, BindingAsyncState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Cancelled"){
      v = BindingAsyncState::Cancelled;
      return;
    }
    if(s == "Cancelling"){
      v = BindingAsyncState::Cancelling;
      return;
    }
    if(s == "Failed"){
      v = BindingAsyncState::Failed;
      return;
    }
    if(s == "None"){
      v = BindingAsyncState::None;
      return;
    }
    if(s == "Running"){
      v = BindingAsyncState::Running;
      return;
    }
    if(s == "Succeeded"){
      v = BindingAsyncState::Succeeded;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_BindingAsyncState_HPP
