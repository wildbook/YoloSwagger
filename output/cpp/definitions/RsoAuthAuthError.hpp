#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAuthError_t {
    std::string errorDescription;
    std::string error;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAuthError_t& v) {
    j["errorDescription"] = v.errorDescription;
    j["error"] = v.error;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAuthError_t& v) {
    v.errorDescription = j.at("errorDescription").get<std::string>();
    v.error = j.at("error").get<std::string>();
  }
  inline std::string to_string(const RsoAuthAuthError_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
