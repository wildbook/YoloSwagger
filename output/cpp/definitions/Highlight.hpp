#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct Highlight_t {
    std::string name;
    std::string mtimeIso8601;
    std::string filepath;
    std::string url;
    uint64_t mtimeMsUtc;
    uint64_t fileSizeBytes;
    uint64_t id;
  };

  inline void to_json(nlohmann::json& j, const Highlight_t& v) {
    j["name"] = v.name;
    j["mtimeIso8601"] = v.mtimeIso8601;
    j["filepath"] = v.filepath;
    j["url"] = v.url;
    j["mtimeMsUtc"] = v.mtimeMsUtc;
    j["fileSizeBytes"] = v.fileSizeBytes;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, Highlight_t& v) {
    v.name = j.at("name").get<std::string>();
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>();
    v.filepath = j.at("filepath").get<std::string>();
    v.url = j.at("url").get<std::string>();
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>();
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>();
    v.id = j.at("id").get<uint64_t>();
  }
  inline std::string to_string(const Highlight_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
