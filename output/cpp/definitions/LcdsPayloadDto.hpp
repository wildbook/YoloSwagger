#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LcdsPayloadDto_t {
    std::string path;
    std::string body;
    std::map<std::string, std::string> headers;
    std::string method;
  };

  inline void to_json(nlohmann::json& j, const LcdsPayloadDto_t& v) {
    j["path"] = v.path;
    j["body"] = v.body;
    j["headers"] = v.headers;
    j["method"] = v.method;
  }

  inline void from_json(const nlohmann::json& j, LcdsPayloadDto_t& v) {
    v.path = j.at("path").get<std::string>();
    v.body = j.at("body").get<std::string>();
    v.headers = j.at("headers").get<std::map<std::string, std::string>>();
    v.method = j.at("method").get<std::string>();
  }
  inline std::string to_string(const LcdsPayloadDto_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
