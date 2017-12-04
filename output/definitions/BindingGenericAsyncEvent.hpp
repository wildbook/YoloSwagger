#ifndef SWAGGER_TYPES_BindingGenericAsyncEvent_HPP
#define SWAGGER_TYPES_BindingGenericAsyncEvent_HPP
#include <json.hpp>
namespace leagueapi {
  // Represents generic data for an asynchronous event.
  struct BindingGenericAsyncEvent {
    // Asynchronous operation token
    uint32_t asyncToken;
    // Event data
    nlohmann::json data;
  };

  void to_json(nlohmann::json& j, const BindingGenericAsyncEvent& v) {
    j["asyncToken"] = v.asyncToken;
    j["data"] = v.data;
  }

  void from_json(const nlohmann::json& j, BindingGenericAsyncEvent& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t>;
    v.data = j.at("data").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_BindingGenericAsyncEvent_HPP
