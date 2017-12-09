#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthAuthError_t {
    std::string error;
    std::string errorDescription;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthAuthError_t& v) {
    j["error"] = v.error;
    j["errorDescription"] = v.errorDescription;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthAuthError_t& v) {
    v.error = j.at("error").get<std::string>();
    v.errorDescription = j.at("errorDescription").get<std::string>();
  }
  inline std::string to_string(const RsoAuthAuthError_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
