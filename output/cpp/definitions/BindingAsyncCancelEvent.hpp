#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  // Represents a cancelled asynchronous operation.
  struct BindingAsyncCancelEvent_t {
    // Asynchronous operation token
    uint32_t asyncToken;
  };

  inline void to_json(nlohmann::json& j, const BindingAsyncCancelEvent_t& v) {
    j["asyncToken"] = v.asyncToken;
  }

  inline void from_json(const nlohmann::json& j, BindingAsyncCancelEvent_t& v) {
    v.asyncToken = j.at("asyncToken").get<uint32_t>();
  }
  inline std::string to_string(const BindingAsyncCancelEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
