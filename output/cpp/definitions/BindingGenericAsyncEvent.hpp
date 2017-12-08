#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents generic data for an asynchronous event.
  struct BindingGenericAsyncEvent_t {
    // Asynchronous operation token
    uint32_t asyncToken;
    // Event data
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const BindingGenericAsyncEvent_t& v) {
    j["asyncToken"] = v.asyncToken;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, BindingGenericAsyncEvent_t& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t>();
    v.data = j.at("data").get<nlohmann::json>();
  }
  inline std::string to_string(const BindingGenericAsyncEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
