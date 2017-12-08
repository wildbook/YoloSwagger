#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPayloadDto_t {
    std::string_t body;
    std::map<std::string, std::string> headers;
    std::string_t method;
    std::string_t path;
  };

  inline void to_json(nlohmann::json& j, const LcdsPayloadDto_t& v) {
    j["body"] = v.body;
    j["headers"] = v.headers;
    j["method"] = v.method;
    j["path"] = v.path;
  }

  inline void from_json(const nlohmann::json& j, LcdsPayloadDto_t& v) {
    v.body = j.at("body").get<std::string_t>();
    v.headers = j.at("headers").get<std::map<std::string, std::string>>();
    v.method = j.at("method").get<std::string_t>();
    v.path = j.at("path").get<std::string_t>();
  }
  inline std::string to_string(const LcdsPayloadDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
