#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents a failed asynchronous operation.
  struct BindingAsyncFailureEvent_t {
    // Asynchronous operation token
    uint32_t_t asyncToken;
    // Error message
    std::string_t error;
  };

  inline void to_json(nlohmann::json& j, const BindingAsyncFailureEvent_t& v) {
    j["asyncToken"] = v.asyncToken;
    j["error"] = v.error;
  }

  inline void from_json(const nlohmann::json& j, BindingAsyncFailureEvent_t& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t_t>();
    v.error = j.at("error").get<std::string_t>();
  }
  inline std::string to_string(const BindingAsyncFailureEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
