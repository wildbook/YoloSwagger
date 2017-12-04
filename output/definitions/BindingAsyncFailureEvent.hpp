#ifndef SWAGGER_TYPES_BindingAsyncFailureEvent_HPP
#define SWAGGER_TYPES_BindingAsyncFailureEvent_HPP
#include <json.hpp>
namespace test {
  // Represents a failed asynchronous operation.
  struct BindingAsyncFailureEvent {
'    // Asynchronous operation token
    uint32_t asyncToken;
    // Error message
    std::string error;
  };

  void to_json(nlohmann::json& j, const BindingAsyncFailureEvent& v) {
    j["asyncToken"] = v.asyncToken;
    j["error"] = v.error;
  }

  void from_json(const nlohmann::json& j, BindingAsyncFailureEvent& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t>;
    v.error = j.at("error").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_BindingAsyncFailureEvent_HPP
