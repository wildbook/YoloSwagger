#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Highlight_t {
    uint64_t fileSizeBytes;
    uint64_t mtimeMsUtc;
    uint64_t id;
    std::string filepath;
    std::string mtimeIso8601;
    std::string url;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const Highlight_t& v) {
    j["fileSizeBytes"] = v.fileSizeBytes;
    j["mtimeMsUtc"] = v.mtimeMsUtc;
    j["id"] = v.id;
    j["filepath"] = v.filepath;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["url"] = v.url;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, Highlight_t& v) {
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>();
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.filepath = j.at("filepath").get<std::string>();
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>();
    v.url = j.at("url").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const Highlight_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
