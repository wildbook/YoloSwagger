#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Highlight_t {
    uint64_t mtimeMsUtc;
    uint64_t id;
    std::string mtimeIso8601;
    std::string filepath;
    std::string name;
    std::string url;
    uint64_t fileSizeBytes;
  };

  inline void to_json(nlohmann::json& j, const Highlight_t& v) {
    j["mtimeMsUtc"] = v.mtimeMsUtc;
    j["id"] = v.id;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["filepath"] = v.filepath;
    j["name"] = v.name;
    j["url"] = v.url;
    j["fileSizeBytes"] = v.fileSizeBytes;
  }

  inline void from_json(const nlohmann::json& j, Highlight_t& v) {
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>();
    v.filepath = j.at("filepath").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.url = j.at("url").get<std::string>();
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>();
  }
}
