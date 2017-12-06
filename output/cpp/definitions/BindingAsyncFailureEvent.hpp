#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents a failed asynchronous operation.
  struct BindingAsyncFailureEvent_t {
    // Error message
    std::string error;
    // Asynchronous operation token
    uint32_t asyncToken;
  };

  inline void to_json(nlohmann::json& j, const BindingAsyncFailureEvent_t& v) {
    j["error"] = v.error;
    j["asyncToken"] = v.asyncToken;
  }

  inline void from_json(const nlohmann::json& j, BindingAsyncFailureEvent_t& v) {
    v.error = j.at("error").get<std::string>();
    v.asyncToken = j.at("asyncToken").get<uint32_t>();
  }
}
