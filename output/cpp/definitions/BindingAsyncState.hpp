#pragma once
#include <json.hpp>
namespace leagueapi {
  // Possible states of an asynchronous operation.
  enum class BindingAsyncState_t {
    // A request to cancel the operation has been made
    Cancelling_E = 2,
    // The operation was cancelled
    Cancelled_E = 3,
    // Invalid state
    None_E = 0,
    // The operation encountered an error
    Failed_E = 5,
    // The operation is in flight
    Running_E = 1,
    // The operation completed successfully
    Succeeded_E = 4,
  };

  inline void to_json(nlohmann::json& j, const BindingAsyncState_t& v) {
    switch(v) {
      case BindingAsyncState_t::Cancelling_E:
        j = "Cancelling";
      break;
      case BindingAsyncState_t::Cancelled_E:
        j = "Cancelled";
      break;
      case BindingAsyncState_t::None_E:
        j = "None";
      break;
      case BindingAsyncState_t::Failed_E:
        j = "Failed";
      break;
      case BindingAsyncState_t::Running_E:
        j = "Running";
      break;
      case BindingAsyncState_t::Succeeded_E:
        j = "Succeeded";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, BindingAsyncState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Cancelling"){
      v = BindingAsyncState_t::Cancelling_E;
      return;
    }
    if(s == "Cancelled"){
      v = BindingAsyncState_t::Cancelled_E;
      return;
    }
    if(s == "None"){
      v = BindingAsyncState_t::None_E;
      return;
    }
    if(s == "Failed"){
      v = BindingAsyncState_t::Failed_E;
      return;
    }
    if(s == "Running"){
      v = BindingAsyncState_t::Running_E;
      return;
    }
    if(s == "Succeeded"){
      v = BindingAsyncState_t::Succeeded_E;
      return;
    }
  }
  inline std::string to_string(const BindingAsyncState_t& v) {
    switch(v) {
      case BindingAsyncState_t::Cancelling_E:
        return "Cancelling";
      case BindingAsyncState_t::Cancelled_E:
        return "Cancelled";
      case BindingAsyncState_t::None_E:
        return "None";
      case BindingAsyncState_t::Failed_E:
        return "Failed";
      case BindingAsyncState_t::Running_E:
        return "Running";
      case BindingAsyncState_t::Succeeded_E:
        return "Succeeded";
    }
  }

}
