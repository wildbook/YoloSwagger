#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Highlight_t {
    std::string url;
    std::string mtimeIso8601;
    uint64_t fileSizeBytes;
    uint64_t mtimeMsUtc;
    uint64_t id;
    std::string name;
    std::string filepath;
  };

  inline void to_json(nlohmann::json& j, const Highlight_t& v) {
    j["url"] = v.url;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["fileSizeBytes"] = v.fileSizeBytes;
    j["mtimeMsUtc"] = v.mtimeMsUtc;
    j["id"] = v.id;
    j["name"] = v.name;
    j["filepath"] = v.filepath;
  }

  inline void from_json(const nlohmann::json& j, Highlight_t& v) {
    v.url = j.at("url").get<std::string>();
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>();
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>();
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.name = j.at("name").get<std::string>();
    v.filepath = j.at("filepath").get<std::string>();
  }
  inline std::string to_string(const Highlight_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
