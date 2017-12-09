#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPayloadDto_t {
    std::string method;
    std::string body;
    std::map<std::string, std::string> headers;
    std::string path;
  };

  inline void to_json(nlohmann::json& j, const LcdsPayloadDto_t& v) {
    j["method"] = v.method;
    j["body"] = v.body;
    j["headers"] = v.headers;
    j["path"] = v.path;
  }

  inline void from_json(const nlohmann::json& j, LcdsPayloadDto_t& v) {
    v.method = j.at("method").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.headers = j.at("headers").get<std::map<std::string, std::string>>();
    v.path = j.at("path").get<std::string>();
  }
  inline std::string to_string(const LcdsPayloadDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
