#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
#include "BindingFullArgumentHelp.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::string help;
    BindingFullTypeIdentifier_t returns;
    std::string description;
    bool threadSafe;
    std::string name;
    std::string async;
    std::vector<BindingFullArgumentHelp_t> arguments;
    std::vector<std::string> tags;
    std::string nameSpace;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["help"] = v.help;
    j["returns"] = v.returns;
    j["description"] = v.description;
    j["threadSafe"] = v.threadSafe;
    j["name"] = v.name;
    j["async"] = v.async;
    j["arguments"] = v.arguments;
    j["tags"] = v.tags;
    j["nameSpace"] = v.nameSpace;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.help = j.at("help").get<std::string>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.description = j.at("description").get<std::string>();
    v.threadSafe = j.at("threadSafe").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.async = j.at("async").get<std::string>();
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
  }
  inline std::string to_string(const BindingFullFunctionHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
