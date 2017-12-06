#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullArgumentHelp.hpp"
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::string help;
    std::string async;
    std::string name;
    bool threadSafe;
    std::vector<std::string> tags;
    BindingFullTypeIdentifier_t returns;
    std::string nameSpace;
    std::string description;
    std::vector<BindingFullArgumentHelp_t> arguments;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["help"] = v.help;
    j["async"] = v.async;
    j["name"] = v.name;
    j["threadSafe"] = v.threadSafe;
    j["tags"] = v.tags;
    j["returns"] = v.returns;
    j["nameSpace"] = v.nameSpace;
    j["description"] = v.description;
    j["arguments"] = v.arguments;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.help = j.at("help").get<std::string>();
    v.async = j.at("async").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.threadSafe = j.at("threadSafe").get<bool>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
    v.description = j.at("description").get<std::string>();
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
  }
}
