#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents generic data for an asynchronous event.
  struct BindingGenericAsyncEvent_t {
    // Event data
    nlohmann::json data;
    // Asynchronous operation token
    uint32_t asyncToken;
  };

  inline void to_json(nlohmann::json& j, const BindingGenericAsyncEvent_t& v) {
    j["data"] = v.data;
    j["asyncToken"] = v.asyncToken;
  }

  inline void from_json(const nlohmann::json& j, BindingGenericAsyncEvent_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.asyncToken = j.at("asyncToken").get<uint32_t>();
  }
}
