#ifndef SWAGGER_TYPES_BindingAsyncCancelEvent_HPP
#define SWAGGER_TYPES_BindingAsyncCancelEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // Represents a cancelled asynchronous operation.
  struct BindingAsyncCancelEvent {
    // Asynchronous operation token
    uint32_t asyncToken;
  };

  inline void to_json(nlohmann::json& j, const BindingAsyncCancelEvent& v) {
    j["asyncToken"] = v.asyncToken;
  }

  inline void from_json(const nlohmann::json& j, BindingAsyncCancelEvent& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t>;
  }

}
#endif // SWAGGER_TYPES_BindingAsyncCancelEvent_HPP
